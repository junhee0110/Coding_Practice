import tkinter as tk

class Login(tk.Frame):
    def __init__(self, master):
        tk.Frame.__init__(self, master)


    def place_widget(self, row, column):
        self.grid(row = row, column = column)
        self.set_widget()


    def set_widget(self):
        self.id_label =tk.Label(self, text = "ID")
        self.pw_label =tk.Label(self, text = "PW")

        self.id_entry = tk.Entry(self)
        self.pw_entry = tk.Entry(self, show ="*")

        self.login_btn = tk.Button(self, text = "LOGIN", command = self.login)

        self.id_label.grid(row = 0, column = 0)
        self.id_entry.grid(row = 0, column = 1)

        self.pw_label.grid(row = 1, column = 0)
        self.pw_entry.grid(row = 1, column = 1)

        self.login_btn.grid(row = 0, column =2 , rowspan = 2)

    def login(self):
        print("ID :",id_entry.get())
        print("PW :",pw_entry.get())