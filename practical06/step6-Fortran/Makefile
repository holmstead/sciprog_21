FC = gfortran
FCFLAGS = -O3
LDFLAGS = -lm

all: mmf

mmf: main.o mm.o
		$(FC) -o $@ $^ $(LDFLAGS)
##$(FC) -o mmf main.o mm.o $(LDFLAGS)

mm.o: mm.f90
		$(FC) -c $(FCFLAGS) $<
##$(FC) -c $(FCFLAGS) mm.f90

main.o: main.f90
		$(FC) -c $(FCFLAGS) $<
##$(FC) -c $(FCFLAGS) main.f90

clean:
		rm *.o *.mod
