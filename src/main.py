import pyautogui as pyag
import keyboard

def active_false(s_key, q_key, delayt, mlen):
    while keyboard.is_pressed(s_key) == False:
        pass
    while keyboard.is_pressed(q_key) == False:
        pyag.move(0, 10)
        pyag.move(0, -10)

    exit(0)    

while True:
    start_key = input("Input a start key (s recommened): ")
    quit_key = input("Input a quit key (q recommened): ")
    delay = input("Input a delay (10 recommened): ")
    movement_length = input("Input the movement length (10 recommened): ")
    #window_popup = input("Would you like to have a window popup (true recommened): ")

    if start_key == "":
        print("\nPlease Enter Something for the start key\n")
    elif quit_key == "":
        print("\nPlease Enter Something for the quit key\n")
    elif delay == "":
        print("\nPlease Enter Something for the delay\n")
    elif movement_length == "":
        print("\nPlease Enter Something for the movement length\n")
    #elif window_popup == "":
        #print("\nPlease Enter Something for the window popup\n")
    else:
        break

int(delay)
int(movement_length)
#bool(window_popup)

if delay == 0: 
    delay = 10
if movement_length == 0: 
    delay = 10

# if window_popup == True:
#     active_true(start_key, quit_key, delay, movement_length)
# else:
#     pass

active_false(start_key, quit_key, delay, movement_length)