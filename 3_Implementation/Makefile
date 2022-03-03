PROJ_NAME=M1_DigitalConversion_Utility

SRC=src/main.c\
src/binary.c\
src/hexadecimal.c\
src/octal.c\

TEST_SRC=test/test.c\
unity/unity.c\
src/binary.c\
src/hexadecimal.c\
src/octal.c\

INC=-Iinc\
-Iunity\

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


Build:
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Build_test:
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run_test:Build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck:
	cppcheck --enable=all -iunity .
Dynamiccheck:Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
	
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))

