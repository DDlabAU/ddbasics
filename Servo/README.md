![alt text](https://github.com/DDlabAU/2EZArduino/blob/master/Servo/servo-ops%C3%A6tning.PNG "Opsætning")

Opsætning lavet med Autodesk Tinkercad

**Hardware**
- Servo motor

**Funktioner**  
`servoType` er i de røde kits altid 180. 180 er det antal grader servo'en kan dreje. Der findes også 360 graders.   

`maxP();` servo'en går til den "øvre" yderposition.  

`minP();` servo'en går til en "nedre" yderposition.  

`goTo(position);` fortæller servo'en hvor den skal flytte sig hen hvor `position` er positionen beskrevet med et tal mellem 0 (nedre) og 100(øvre). Dette gør servo'en hurtigst muligt.  

`sweepTo(position, time);` fortæller servo'en til at gå til en position, men modsat `goTo` så fortæller man servo'en hvor langt tid den skal bruge. `Position` er positionen beskrevet med et tal mellem 0 (nedre) og 100 (øvre). `time` er den tid det skal tage i sekunder
