from colorama import init, Fore, Style
from os import remove
import os
import time



class Directory:

    def __init__(self):
        self.pwd = '/home/jioska/Desktop/algorithmsInC/deitel/'
        #self.files = os.scandir(self.pwd)
        self.count = 0
        self.redBold = "\x1b[1;31m"
        self.yellowBold = "\x1b[1;33m"
        init()
    
    def searchAndDelete(self):
        files = os.scandir(self.pwd)
        for file in files:
            basename = os.path.basename(file)
            file_name = os.path.splitext(basename)[0]
            if file.name == file_name:
                remove(self.pwd+"{}".format(file_name))
                print(Fore.GREEN+"[{}]".format(self.count+1)+Fore.CYAN,file.name.upper())
                self.count = self.count + 1
    
    def main(self):
        while True:
            print()
            print(self.redBold+"files to delete without extension\n".upper()+Style.RESET_ALL)
            self.searchAndDelete()
            print(self.yellowBold+"the number of files deleted is: {}".format(self.count).upper())
            self.count = 0
            time.sleep(300)

a = Directory()
a.main()

