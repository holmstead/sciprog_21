include 'magic_square.fh'

program magsq
	use msquare
	implicit none
	integer (kind=4) n,i
	integer (kind=4), allocatable :: magicSquare(:,:)
	character (len=6) :: text

	n=0
	do while (n .le. 0)
		write(6,*) 'Enter the square size:'
		read(5,*) n
	end do

!Allocating a matrix for storing the magic square
!as an array of pointers, where each pointer is a row
	
	allocate(magicSquare(n,n))

! Inputting integer data into the matrix
	do i=1,n
		write(6,*) 'Enter the elements in row ',i,' separated by blanks and/or linebreaks'
		read(5,*) magicSquare(i,:)
	end do
	
	if (isMagicSquare(magicSquare,n)) then
		text = 'is'
	else
		text = 'is NOT'
	end if
	write(6,*)'This square ',trim(text),' magic.'

! Freeing each row seperately before freeing the array of pointers
	deallocate(magicSquare)
	stop
end program magsq
