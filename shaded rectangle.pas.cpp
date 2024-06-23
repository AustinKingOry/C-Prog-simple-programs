program shaded_rect(input, output);
var
	l,w,rect: integer;
	r, pi, circle, shaded: real;
	begin
		l:=28;
		w:=25;
		r:=7.5;
		pi:=3.14;
		rect:=l*w;
		per:=2*(l+w);
		circle:=pi*r*r;
		shaded:=rect-circle;
		writeln('shaded area:', shaded:2);
		writeln('perimeter:', per:3);
		readln;
	end
