user_oop: main.o User.o Teacher.o Student.o
	g++ main.o User.o Teacher.o Student.o -o user_oop

main.o: main.cpp
	g++ -c main.cpp

User.o: User.cpp
	g++ -c User.cpp

Teacher.o: Teacher.cpp
	g++ -c Teacher.cpp

Student.o: Student.cpp
	g++ -c Student.cpp

clean:
	rm *.o user_oop
