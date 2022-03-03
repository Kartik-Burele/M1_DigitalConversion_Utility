PROJ_NAME=M1_DigitalConversion_Utility

SRC=src/main.c\
src/binary.c\
src/hexadecimal.c\
src/octal.c\

<<<<<<< HEAD
TEST_SRC=test/test.c\
unity/unity.c\
src/binary.c\
src/hexadecimal.c\
src/octal.c\
=======
#SRC = main.c\
>>>>>>> dbcafaa5bbf0065b0717a02c51ed6fb1082855fe

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


<<<<<<< HEAD
Build:
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
=======
all:$(BUILD_DIR)
	gcc -IC main.c  $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
>>>>>>> dbcafaa5bbf0065b0717a02c51ed6fb1082855fe

run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Build_test:
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

<<<<<<< HEAD
run_test:Build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
=======
coverage: ${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(INC)
>>>>>>> dbcafaa5bbf0065b0717a02c51ed6fb1082855fe

staticcheck:
	cppcheck --enable=all -iunity .
Dynamiccheck:Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
	
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))

