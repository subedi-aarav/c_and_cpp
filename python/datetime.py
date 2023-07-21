#display date and time.

import datetime

x = datetime.datetime.now()

def type():
    
    if x.strftime("%m") == 1:
        a = "st"
    elif x.strftime("%m") == 2:
        a = "nd"
    elif x.strftime("%m") == 3:
        a = "rd"
    else:
        a = "th"
    return a    

print(x.strftime("%Y"),"-", x.strftime("%B"),"-", x.strftime("%m")+type())
      