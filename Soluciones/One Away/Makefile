CCOPTION = Wall std=gnu++11 D__USE_MINGW_ANSI_STDIO=1
FLAGS = $(addprefix -,$(CCOPTION))
CC = g++
OBJ = main.o 
SRC_DIR = D:\Carlos\Cinvestav\One Away

output.exe: $(OBJ) 
	 $(CC) $(FLAGS) $(OBJ) -o output.exe 

main.o: $(SRC_DIR)\main.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\main.cpp -o main.o 


clean: 
	del /Q $(OBJ_DIR)\*.o
	del /Q $(BUILD_DIR)\*.exe
