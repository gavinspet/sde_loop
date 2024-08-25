#!/bin/bash

echo "Current status"
git status

echo "Adding all files"
git add .

echo "Current status"
git status

read -p "Enter commit message: " commit_message

git commit -a -m "$commit_message"

git push


