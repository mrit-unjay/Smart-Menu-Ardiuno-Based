Smart Menu – Arduino-Based System
This project is a Smart Menu system developed using an Arduino microcontroller. It is designed to modernize the traditional restaurant experience by allowing users to interact with a digital menu using a simple, intuitive hardware interface. The system provides options for selecting items, confirming orders, and displaying total cost on an LCD display.

📌 Features
Menu navigation using physical buttons
Real-time order display on an LCD screen
User-friendly interaction flow
Dynamic item selection and pricing
Reset option to start a new order
🛠️ Hardware Components
Arduino Uno (or compatible board)
16x2 LCD Display
Push buttons (minimum 4)
Resistors (for pull-down configuration)
Breadboard and jumper wires
Power supply (via USB or battery)
⚙️ Functionality Overview
Button A (Pin 2): Selects "Item 1" and adds its price
Button B (Pin 3): Selects "Item 2" and adds its price
Button C (Pin 4): Confirms the order and displays total cost
Button D (Pin 5): Resets the system to a blank state
Each item has a predefined cost (e.g., Item 1: ₹100, Item 2: ₹150). The total is accumulated and shown once the confirm button is pressed.

🧾 Code Summary
The sketch_may15a.ino file includes:

Initialization of the LCD and input pins
Debouncing logic for clean button reads
Real-time tracking of order values
User-friendly messaging on LCD
🔌 Circuit Diagram
Coming soon: A basic wiring diagram to show button-to-pin and LCD connections.

✅ How to Use
Connect the hardware components as per the wiring schematic.
Upload sketch_may15a.ino to your Arduino board via the Arduino IDE.
Press the buttons to select items and confirm your order.
View total cost on the LCD screen.
Reset to start a new order.
🧑‍💻 Author
Your Name
B.Tech, MIT Art, Design and Technology University
📄 License
This project is open-source and free to use under the MIT License.

🔗 Useful Links
Arduino Official Site
LiquidCrystal Library Docs
About
An Arduino-based digital menu system using buttons and an LCD display to select items, confirm orders, and view total cost — ideal for modernizing restaurant ordering. A Hardware based learning project used for understanding Arduino ATMEGA328P concepts.

Resources
 Readme
 Activity
Stars
 0 stars
Watchers
 1 watching
Forks
 0 forks
Report repository
Releases
No releases published
Create a new release
Packages
No packages published
Publish your first package
Languages
C++
100.0%
Suggested workflows
Based on your tech stack
C/C++ with Make logo
C/C++ with Make
Build and test a C/C++ project using Make.
SLSA Generic generator logo
SLSA Generic generator
Generate SLSA3 provenance for your existing release workflows
CMake based, multi-platform projects logo
CMake based, multi-platform projects
Build and test a CMake based project on multiple platforms.
More workflows
Footer
© 2025 GitH
