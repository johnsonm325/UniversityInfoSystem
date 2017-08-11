CXX = g++
CXXFLAGS += -std=c++11
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g#

OBJS = inputValidation.o Menu.o university.o people.o student.o instructor.o buildings.o OSUmain.o

SRCS = inputValidation.cpp Menu.cpp university.cpp people.cpp student.cpp instructor.cpp buildings.cpp OSUmain.cpp

HEADERS = inputValidation.h Menu.h University.h People.h Student.h Instructor.h Buildings.h

OSUInformation: ${OBJS} ${HEADERS}
		${CXX} ${OBJS} -o OSUInfo

${OBJS}: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o OSUInfo
