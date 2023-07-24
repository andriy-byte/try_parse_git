#!/bin/bash

# Prompt the user to enter their name
echo "Enter your first name:"
read first_name

# Prompt the user to enter their last name
echo "Enter your last name:"
read last_name

# Display a personalized message
echo "Hello, $first_name $last_name!"
echo -e "\n\n"
read -p "Press enter to continue"


if command -v nala &> /dev/null
then
   sudo nala install gcc g++
else 
   sudo apt-get install gcc g++
fi
