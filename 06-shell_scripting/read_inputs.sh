  #!/usr/bin/bash

# single input
  echo "Enter name"
  read name
  echo "Name is $name"

# multiple input
echo "Enter names"
read name1 name2
echo "names are $name1 $name2"

# same line input
read -p "Enter username: " user_var
echo "username : $user_var"

# silent prompt
read -p "Enter username: " user_var
read -sp "Enter Password: " pass_var
echo
echo "username : $user_var"
echo "Password : $pass_var"

#default read goes to $REPLY
read
echo $REPLY

#take array of inputs
echo "Enter names: "
read -a names
echo "Names : ${names[0]}, ${names[1]}"