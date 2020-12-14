from tkinter import *

root = Tk()
root.title("Calculator")
# root.iconbitmap("file.png")
root.geometry("400x500")

Entry1 = Entry(root, width=50, background="skyblue", borderwidth=7)
# Entry1.pack()
# Entry1.grid(row=0,column=0)
Entry1.place(x=50,y=50)

def btn_click(num):
    current = Entry1.get()
    Entry1.delete(0,END)
    Entry1.insert(0,current + str(num))


def btn_add():
    num1 = Entry1.get()
    Entry1.delete(0,END)
    global first_num
    first_num = float(num1)
    global val
    val = "+"

def btn_sub():
    num1 = Entry1.get()
    Entry1.delete(0,END)
    global first_num
    first_num = float(num1)
    global val
    val = "-"

def btn_mul():
    num1 = Entry1.get()
    Entry1.delete(0,END)
    global first_num
    first_num = float(num1)
    global val
    val = "x"

def btn_div():
    num1 = Entry1.get()
    Entry1.delete(0,END)
    global first_num
    first_num = float(num1)
    global val
    val = "/"

def btn_eq():
    num2 = Entry1.get()
    Entry1.delete(0,END)
    second_num = float(num2)

    if val == "+":
        Entry1.insert(0,str(first_num + second_num))
    if val == "-":
        Entry1.insert(0,str(first_num - second_num))
    if val == "x":
        Entry1.insert(0,str(first_num * second_num))
    if val == "/":
        if second_num != 0:
            Entry1.insert(0,str(first_num / second_num))
        else:
            Entry1.insert(0,"Can't divide by zero")

def btn_clr():
    Entry1.delete(0,END)



Button9 = Button(root, text="9", width=10, pady=30, background="pink", command=lambda: btn_click(9))
Button9.place(x=50,y=90)

Button8 = Button(root, text="8", width=10, pady=30, background="pink", command=lambda: btn_click(8))
Button8.place(x=160,y=90)

Button7 = Button(root, text="7", width=10, pady=30, background="pink", command=lambda: btn_click(7))
Button7.place(x=280,y=90)

Button6 = Button(root, text="6", width=10, pady=30, background="pink", command=lambda: btn_click(6))
Button6.place(x=50,y=180)

Button5 = Button(root, text="5", width=10, pady=30, background="pink", command=lambda: btn_click(5))
Button5.place(x=160,y=180)

Button4 = Button(root, text="4", width=10, pady=30, background="pink", command=lambda: btn_click(4))
Button4.place(x=280,y=180)

Button3 = Button(root, text="3", width=10, pady=30, background="pink", command=lambda: btn_click(3))
Button3.place(x=50,y=270)

Button2 = Button(root, text="2", width=10, pady=30, background="pink", command=lambda: btn_click(2))
Button2.place(x=160,y=270)

Button1 = Button(root, text="1", width=10, pady=30, background="pink", command=lambda: btn_click(1))
Button1.place(x=280,y=270)

Button0 = Button(root, text="0", width=10, pady=30, background="pink", command=lambda: btn_click(0))
Button0.place(x=50,y=360)

ButtonAdd = Button(root, text="+", width=10, pady=6, background="skyblue", command=lambda: btn_add())
ButtonAdd.place(x=160,y=360)

ButtonSub = Button(root, text="-", width=10, pady=6, background="skyblue", command=lambda: btn_sub())
ButtonSub.place(x=280,y=360)

ButtonMul = Button(root, text="x", width=10, pady=6, background="skyblue", command=lambda: btn_mul())
ButtonMul.place(x=160,y=410)

ButtonDiv = Button(root, text="/", width=10, pady=6, background="skyblue", command=lambda: btn_div())
ButtonDiv.place(x=280,y=410)

ButtonEq = Button(root, text="=", width=20, pady=6, background="skyblue", command=lambda: btn_eq())
ButtonEq.place(x=50,y=450)

ButtonClr = Button(root, text="Clear", width=20, pady=6, background="skyblue", command=lambda: btn_clr())
ButtonClr.place(x=210,y=450)


root.mainloop()

