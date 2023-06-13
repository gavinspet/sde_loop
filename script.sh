#!/bin/bash

echo "Current status"
git status

echo "Adding all files"
git add .

echo "Current status"
git status

read -p "Enter commit message: " commit_message

git commit -a -m "$commit_message"

# Set the credentials temporarily for the current session
git config --global credential.helper store <<<"https://github.com"
git config --global user.username "gavinspet"
git config --global user.password "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"

git push

# Clear the credentials after usage
git config --global --unset user.username
git config --global --unset user.password

