# magiNote

take notes easier with the help of AI!

**Why?**

Taking notes electronically in fast-paced classes can be a hastle when you have to worry about keeping your ideas organized.
Why not allow AI to do that for you so you can focus on the content provided in the lecture?

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequesites

This application is built with node.js. Be sure to [install node.js](https://nodejs.org/en/download) before continuing.

### Installing

All dependencies are located in the package.json file included in the repo. To install them:

```
npm install
```

Be sure to compile the source code on your local machine:

```
g++ -o magiNote editor.cpp -Wall
```

## Using magiNote

Inside the root directory, run the following command:

```
./magiNote [session_name]
```
Running the program will create 2 files, both saved to the 'notes' directory of the repo.
The file *session_name* is a text file of the raw inputs from the user, which is saved in case AI enhancement fails or is undesirable.
Another file, *session_name*_formatted.md, is the enhanced version of the notes.


## Built With

* OpenAI API (GPT 4.0 Mini)
* Node.js

## Authors

* **Jake Hatchell**

