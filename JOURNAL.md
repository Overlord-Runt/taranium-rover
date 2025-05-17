15th of May

highway was just announced :D

Anyways I was coming up with a few project ideas when suddenly I thought: GUN\
But a gun is boring tbh. It just shoots and does weird stuff.\
So what could be better than a gun you may ask?\
A gun.... ON WHEELS.\
But what could be better than a gun on wheels?\
A REMOTE CONTROL GUN ON WHEELS.

You heard it here first folks. thats how we roll.

Anyways now its time for my suoer cool progress report\
*insert super cool name for the project report*\
I did some cadding today for like an hour or 2 and I made a wheel :D\
I also made some gears and mechanical stuff for the back tires.\
thats about it tbh.\
![wheel](assets/wheel.png)\
![gear](assets/gear1.png)

Anyways time for a farewell my good friends, \
Until the next we meet.

Time spent: about an hour

16th of May

hello. I am writing this on the 17th cuz i forgot to do it yesterday.\
anyways I dibbled a bit in the cad but mainly started up with my pcb and electronics.

so I started doing pcb stuff. but I came across a problem.\
I dont want to buy and use a motor driver. but I need the dc motor to be able to move forwards and backwards.\
after a bit of thinking, i remembered an old school project where i did that but with a physical switch.\
now the question was, how do i make that into something i can turn on with gpio pins?

after a bunch of thinking and designs later, I reinvented the H bridge.\
![h](assets/jank.jpg)

after that i started work on the schematic and pcb and ended off the day looking like this:\
![schm1](assets/schm1.png)\
![pcb1](assets/pcb1.png)

oh yeah i decided to use an esp32 as the mcu so i could use esp-now as the communication between it and the controller.

Time spend: 1-2 hours(I forgot but somewhere in that range)

17th of May

okay time for todays update. im gonna talk as if you have image references and then add the images in later cuz im not bothered rn tbh.\
if you can see images here then congrats, you came after i added images.

Okay so with my schematic i added a whole bunch of stuff like the stepper motor, more h-bridges, more servos, battery connectors, etc.\
also that weird stuff going on with my battery connectors is me trying to make both a 6V and 12V power supply come from 2 6V batteries.\
so the diodes limit the flow so it doesnt blow up on itself and the batteries are aranged so they are both in series and in parallel at the same time.

I also added more h-bridges and servo spots than im actually gonna use\
the thought process is that if in the future i wanted to change up the functionality, then i could use those extra ones if needed. plus I had space anyways.

tmrw im gonna probably gonna go and start on the internals cadding. but i need to do meth and physics hw first :(\
anyways bye

Time spent today: 5 hours
