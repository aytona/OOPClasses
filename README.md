# OOP_Assignment_2
Assignment 2: Classes & Objects

The goal of this assignment is to build an application that consists of a class whose object values are assigned from a text file.There will also be a subclass, a vector and exception handling. Include the following criteria:

Base Class

You are going to create a non-template base class with the following criteria:

1) Name the class whatever you like – so long as it’s a valid identifier and it’s not offensive. It doesn’t have to represent anything but you’re welcome to come up with a theme if you like.

2) The class will have the following four protected member variables named anything you like:

a. A string

b. A float

c. An integer

d. A bool

3) You will get the values for these member variables from a text file you create. The details of the text file are as follows:

a. Name the text file whatever you like

b. You must have five groups of the above base class members meaning there will be 20 items in the text file. A string, a float, an int a bool... then the next “record”... another string, another float, another int, another bool... etc.

i. I recommend that you put each “record” of four on its own line for clarity purposes.

ii. For example, sample lines in the file would be:

Pie 3.1415 69 true

Apple 4.234 42 true

c. It is going to be up to you to figure out how and WHERE to set the values of the four base class member variables from the text file. I will allow you to do it anywhere in the program using any function or method of your choice. As long as the values are set.

4) Now, given what I said in 3c, you are going to have to create a method in the base class that prints those four members. So you’ll be required to set those members from the file BEFORE you call the print function. More on this when I talk about the main() for the program.
Subclass
You’re also going to have to make a subclass (derived class) of your base class. Follow the criteria below:

1) Name this class whatever you like. You can make the name related to the base class if you like.

2) Inherit this class publically from the base class.

3) This class will only have ONE new private member variable and let’s make it another string with a name of your choice.

4) You will NOT be getting the value of this string from the text file but rather you can set the string to whatever you like when you create an object of this subclass.

a. That is, make a non-default constructor for this subclass with a string as its only parameter and then set the member string to the value held in the constructor’s parameter.

5) This class will have a print function as well that will be called from the main using an object of this subclass.

a. You CAN (and maybe should) choose to call the print function of the base class from this function if you like.
Main Function
The following explains what you should have in the main function of your program:

1) You are going to create a vector of objects from the subclass NOT the base class. You can call the vector anything you like.

2) You are going to create five objects of the subclass. You can create the objects however you like but remember to pass in a string as the only parameter to each object’s constructor.

a. Remember that when you create the objects of the subclass you are going to construct the base class too and set the values of its four member variables to the values in the text file.

b. Again, how you do that and where is up to you.

3) How you add the objects to the vector is up to you but remember our vector example from class.

4) You are going to iterate through the vector and call the print function of each subclass object, so that it prints the string in the subclass and the four member variables in the base class.

a. The format of the output is up to you.

Exception Handling

1) The only exception handling I want you to have in this program deals with accessing the file.

2) If you are unable to read the file – for example, if it doesn’t exist, then you should throw and exception and terminate the program.

3) This is obviously going to occur when you try to read the file so you have to figure out where to handle this exception.

4) I WILL be testing for this and I’ll delete your file and try to run your program.

5) You do not need to print anything out upon catching the exception, just terminate the program.
Notes & Bonus

6) You don’t need a separate header file for the classes if you don’t want. You CAN though if you do. There will be no difference in marking.

7) This is an individual assignment – so do it yourself. Enough said.

8) For a 2% bonus, ensure that the base class is abstract. Again, it’s going to be up to you to figure out how to do this. I haven’t given you very many functions to work with, so if you MUST create a new function just to make the class abstract, I will allow it. Because you probably will have to create a new function in the base class and subclass in order to get it to work. Big hint there. Just make it abstract – meaning you can’t create objects of the base class – any way you can.

9) No, this is not the only bonus you’ll get during the second half of the course. There will be a purely bonus assignment posted shortly after this one.
