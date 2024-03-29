#!/bin/bash

#----------------------------------------------------

#SBATCH -J Project
#SBATCH -o SS.o%j 
#SBATCH -e SS.e%j 
#SBATCH -p debug 
#SBATCH -N 1 
#SBATCH -n 128 # Total # ask for 1 core on a node
#SBATCH -t 00:10:00 
#SBATCH -A SEE230009 
#SBATCH --mail-user=pacharya@umassd.edu
#SBATCH --mail-type=all


./StrongScaleC.sh



