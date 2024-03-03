#!/bin/bash
#SBATCH --job-name=fluent_simulation
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=64
#SBATCH --time=24:00:00
#SBATCH --output=output_%j.txt

module load ANSYS/19.2

fluent 3ddp -g -t64 -i withvents.jou -ssh
