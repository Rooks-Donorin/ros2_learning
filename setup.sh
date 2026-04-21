#!/bin/bash

# This is a comment
echo "Setting up my ROS2 workspace..."

# Variables
PROJECT_NAME="ros2_learning"
echo "Project: $PROJECT_NAME"

# If statement
if [ -d ~/projects ]; then
    echo "Projects folder exists."
else
    echo "Projects folder missing."
fi

# Loop
echo "Counting to 5:"
for i in 1 2 3 4 5; do
    echo " $i"
done

echo "Done!"