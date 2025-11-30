# Architecture of The Application
We will first clarify what the Application is with an overview of what it does
and what problems it solves; why it's being made. Then, we will elaborate on the
tech stack used to create the Application. Then we will explain the core archi-
tectural concepts used to create the architecture of the Application, and then
we will define the core modules of the Application, and within their definition
describe the API the module exposes and roughly elaborate on the internal work-
ings. Then, we will clarify how each module should be used to form the Applica-
tion.

## Overview

## Tech Stack

## OS Interface Module
An abstraction from OS API functions not regarding GUI & sound.

## GUI Module
An abstraction from OS API functions regarding GUI.

## Settings Module
A container for internal and externally-loaded settings, allowing read/write.

## Sound Module
An abstraction from OS API functions regarding sound.

## Main Module
The meat of the application, containing the main loop and being the driving
force behind the app.

## The Design of the Application
