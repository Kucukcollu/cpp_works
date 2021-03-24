pilot: run_main.o words.o pilot_func_lib.o
	g++ run_main.o words.o pilot_func_lib.o -o pilot

run_main.o: run_main.cpp
	g++ -c run_main.cpp

words.o: words.cpp
	g++ -c words.cpp

pilot_func_lib.o: pilot_func_lib.cpp
	g++ -c pilot_func_lib.cpp

clean:
	rm *.o pilot
