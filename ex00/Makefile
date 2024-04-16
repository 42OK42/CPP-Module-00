# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 13:51:17 by okrahl            #+#    #+#              #
#    Updated: 2024/04/02 19:41:16 by okrahl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler
CXX = g++

# Define any compile-time flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Define any directories containing header files
INCLUDES =

# Define any libraries to link into executable
LIBS =

# Define the source files
SRCS = megaphone.cpp \

# Define the object files
OBJS = $(SRCS:.cpp=.o)

# Define the dependency files
DEPS = $(SRCS:.cpp=.d)

# Define the executable file
MAIN = megaphone

.PHONY: all clean fclean re

# The default rule - build the main target
all: $(MAIN)

# Rule to link the program - only runs if an object file is newer than the executable
$(MAIN): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LIBS)
	@echo megaphone has been compiled

# Rule to compile the source files into object files
.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Rule to clean the workspace
clean:
	$(RM) *.o *~ $(DEPS)

# Rule to fully clean the workspace (including the executable)
fclean: clean
	$(RM) $(MAIN)

# Rule to re-make everything
re: fclean all

# Rule to generate a file of dependencies (uses the -MM GCC flag)
%.d: %..cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -MM $< > $@