# User's Responsibilty: Specify the path of downloaded Eigen library (keep "-I ")
INC_EIGEN_ROOT := -I /mnt/c/Users/mantkuma/Documents/libraries/eigen3 

CC := g++
CFLAGS := -std=c++11 -g -Wall -O2 -Werror=format-security

# Structure of EKF project
EKF_SRCDIR := ./../src/ekf
EKF_BUILDDIR := ./../build/ekf
EKF_INC := -I ./../include/ekf
EKF_BINDIR := ./../bin

# Name of the executable of EKF project
EKF_TARGET := $(EKF_BINDIR)/ekf.out

# Decide whether the commands will be shown or not
VERBOSE = TRUE

ekf.out: main.o mantosh.o
	@echo " Linking ekf objects files ..."
	@mkdir -p $(EKF_BINDIR)
	$(CC) -o $(EKF_TARGET) $(EKF_BUILDDIR)/main.o $(EKF_BUILDDIR)/mantosh.o

main.o: $(EKF_SRCDIR)/main.cpp
	@echo " Building main.o ..."
	@mkdir -p $(EKF_BUILDDIR)
	$(CC) $(CFLAGS) -c -o $(EKF_BUILDDIR)/main.o $(EKF_INC) $(INC_EIGEN_ROOT) $(EKF_SRCDIR)/main.cpp

mantosh.o: $(EKF_SRCDIR)/mantosh.cpp
	@echo " Building mantosh.o ..."
	@mkdir -p $(EKF_BUILDDIR)
	$(CC) $(CFLAGS) -c -o $(EKF_BUILDDIR)/mantosh.o $(EKF_INC) $(INC_EIGEN_ROOT) $(EKF_SRCDIR)/mantosh.cpp

clean:
	@echo "Cleaning ..."; 
	rm -rf $(EKF_BUILDDIR)/* $(EKF_BINDIR)/*
