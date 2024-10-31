For lab6, you need to:
-explain your solution to our teaching assistant, and
-submit it through the blackboard.

A drawing application: the user can add different kinds of shapes to a canvas.
All these shapes have a few things in common, like background color, border and so on.

As your exercise,
- create a new class: Shape and let two classes: Rectangle and Circle derive from the Shape.
- For each class you should implement the member functions in the implementation file.
- Add a function to base class: draw(), let two derived classes override this function.
- Back to main file, create a function: showShape(), pass a Shape object as the argument, draw shape for implementation.
- Use Polymorphic Collection: create a vector of Shape, put a rectangle and a circle to it, loop over the vector draw a rectangle and a circle on the console. (use late or dynamic binding)
- Rewrite this code using unique pointer instead.

Shape
-background: string
+getBackground( )
+setBackground( )
+void draw( );

Rectangle
-width: int
-heigth: int
+Rectangle( );
+Rectangle(int width, int height)
+void draw( );
+int getArea( );

Circle
-radius: float
+Circle( );
+Circle(float radius)
+float getArea( );
+void draw( );