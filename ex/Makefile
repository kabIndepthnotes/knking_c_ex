
.DEFAULT_GOAL := none

CC      := gcc
# CLIBS  := -lraylib -lm
CFLAGS  := -pg -std=c99 -Wall -W -pedantic -fanalyzer 
LOG := 2>&1|tee log.txt

none:
	echo "please write the executable filename"

# make the c file
%: %.lit
	lit $@.lit
	$(CC) $@.c $(CFLAGS) -o $@ $(LOG)

# %: %.o
# 	$(CC) $(CFLAGS) $@

# clean will remove all executables
clean:
	find . -type f -executable -delete
