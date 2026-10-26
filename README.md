# BRAMS plane simulator
A simulation tool where we input a flight trajectory in 3D as the equation of a line, and try to simulate the spectrograms/what our trajectory will look like in the end.
# Situation
In the origin, we have the receiving station. This is our first focal point $f_1$.
For every receiver station, we define the other focal point $f_2$. 
Then, we have an ellipsoid $|f_1|+|f_2|=2a$, where $a$ is the semi-major axis.
In our experiment, we want to choose $a$ such that the top of the ellipsoid is at a maximum plane altitude.
This way, we have the greatest surface area possible where as a candidate for planes to fly through.
# Program outline
1. Check if an intersection between the trajectory and the ellipsoid exists
2. At the intersection, check the plane velocity towards the detector (plane velocity) and derive the frequency shift
3. Plot the detected frequency as a function of time (don't forget that the plane has a finite length, and we have limited resolution). 
The result is a spectrogram of probably two highlighted points. 
To improve this result, non-linear paths should be tested, as well as planes ascending and descending.
# Things to check
1. Try non-linear paths. This way, we may get some different results
