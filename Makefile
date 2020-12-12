DIR=build build
$(shell mkdir -p $(DIR))
$(shell gcc Program.c -o build/ConsoleCalculator1)
$(shell echo "run.sh" > build/run.sh)
$(shell echo "./build/ConsoleCalculator1" > build/run.sh)
