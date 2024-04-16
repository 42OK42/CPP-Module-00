# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 20:00:09 by okrahl            #+#    #+#              #
#    Updated: 2024/04/01 20:09:19 by okrahl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and compiler flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Define the source files, object files and executable name
SOURCES = tests.cpp Account.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = bank_program

# Default target
all: $(EXECUTABLE)

# Rule to create the executable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

# Rule to create object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to delete compiled files
clean:
	rm -f $(OBJECTS)

# Full clean target to delete compiled files as well as the executable
fclean: clean
	rm -f $(EXECUTABLE)

# Recompile target to make it from scratch
re: fclean all

# Phony targets
.PHONY: all clean fclean re