# Architecture of The Application
We will first clarify what the Application is with an overview of what it does\
and what problems it solves; why it's being made. Then, we will elaborate on the\
tech stack used to create the Application. Then we will explain the core archi-\
tectural concepts used to create the architecture of the Application, and then\
we will define the core modules of the Application, and within their definition\
describe the API the module exposes and roughly elaborate on the internal work-\
ings. Then, we will clarify how each module should be used to form the Applica-\
tion.

IMPORTANT CLARIFICATION: This Document was created prior to programming. It will\
be updated to appropriately reflect the current design of the App but when pro-\
gramming, this Document may not accurately reflect how something *should* be\
done. It will have to be updated when something changes during programming.\
Also, this Document acts as the source of truth for the design of the program.\
Diagrams are mirrors of this Document. This Document should accurately describe\
the structure of the codebase.

## Overview
`morskey` is an application that captures the keyboard of the user and trans-\
lates straight-key morse code input from a key of the user's choice into charac-\
ters, which are sent to the Operating System which sends it to the apps the user\
has open, such as a browser, game, text editor, or a chat client. It also gives\
some customization features, like having sound on or off, and what frequency the\
sound of morse code input plays at, or what key you use to enter and escape mor-\
se input mode, and also what morse code even means; being able to define the\
particular inputs that translate into characters of your choice. It also allows\
more exotic output, such as being able to send out multiple characters with one\
code or non-character output.

### The Problem
I found myself tinkering with morse code online and I wanted to try out morse\
code inside Discord, a chat client, to talk with friends through morse code. I\
also wanted to try browsing the web with morse code. I did an (admittedly) brief\
search and couldn't find anything that matched my needs. I also wanted to have\
fun with a decent project, and this was perfect for me.

## Tech Stack
The programming language we will be using is C99. Simply put, I just like C and\
wanted to make an app in C99. Outside of that, we will be using the Win32 and\
X11 APIs for all the GUI, input, etc. Qt is far too dense a library and I don't\
believe it provides the right API for this app anywho, and I don't care to try\
and find anything else. If there was something—it'd be difficult to work with or\
pricey. And I can handle Win32. I don't have experience in X11 but I cannot im-\
agine it would be any more difficult than Win32, plus I have verified that X11\
provides the API necessary to build the Application. And, I like Win32! Honest-\
ly!

## Concepts
The first core concept is the split between the OS specific code, and the code\
of the application. This is so we only program the app *once*. Instead of making\
two duplicates of the app, one that uses Win32 and one that uses X11, we make\
one version of the app, that interacts with our abstraction from the OS code.\
It makes modifying the internal logic of the app very easy. We only change it\
once. It also makes modifying the OS specifics easier, because we know the app\
logic won't change.

## OS Interface Module
An abstraction from OS API functions not regarding GUI & sound.

### Functions
lorem

## GUI Module
An abstraction from OS API functions regarding GUI.

### Functions
lorem

## Settings Module
A container for internal and externally-loaded settings, allowing read/write.

### Functions
lorem

## Sound Module
An abstraction from OS API functions regarding sound.

### Functions
lorem

## Main Module
The meat of the application, containing the main loop and being the driving for-\
ce behind the app.

### Functions
lorem

## The Design of the Application
