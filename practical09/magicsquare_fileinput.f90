include 'magic_square.fh'

program magsq
	use msquare
	implicit none
	integer (kind=4) n,i,ierr,num(100)
	integer (kind=4), allocatable :: magicSquare(:,:)
	character (len=6) :: text
	character (len=100) :: filename, line

!
! Code for getting values from a file
!

! Open the file
	write(6,*) 'Enter the file name with the square matrix'
	read(5,*) filename

	ierr = 0
	open(unit=1,file=filename,form='FORMATTED',access='SEQUENTIAL',action='READ', status='OLD', iostat=ierr)

	if (ierr .NE. 0) then
		write(6,*) 'Sorry cannot find file', filename
		go to 20
	end if

!
! First line has n
!

	n=0
		!write(6,*) 'ierr= ', ierr
	do while (ierr .EQ. 0)
		read(1,*,iostat=ierr) line
			!write(6,*) 'test ',n,line,ierr
		n=n+1
	end do
	n=n-1
	write(6,*) ' n = ', n
	rewind(unit=1)

	if (n .LE. 0) go to 10
		!read(1,*,iostat=ierr) n

!
! Allocating a matrix for storing the magic square
! as an array of pointers, where each pointer is a row
!
	
	allocate(magicSquare(n,n))

!
! Read in the rows from each line
!

	do i=1,n
		read(1,*,iostat=ierr) magicSquare(i,:)
	end do
	
	if (ierr .NE. 0) then
		write(6,*) 'Cannot read in matrix correctly, stopping. '
		goto 10
	end if


	if (isMagicSquare(magicSquare, n)) then
		text = 'is'
	else
		text = 'is NOT'
	end if
	write(6,*) 'This square ',trim(text),' magic'

! Freeing each row seperately before freeing the array of pointers
	deallocate(magicSquare)
10	continue
	close(unit=1,status='KEEP')
20	stop
end program magsq
