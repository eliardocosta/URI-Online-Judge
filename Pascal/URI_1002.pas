{
   URI_1002.pas
   
   Copyright 2017 Eliardo Costa <>
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the BSD Zero Clause License as published by
   Rob Landley. See http://spdx.org/licenses/0BSD.html for more details.
   
}


program untitled;

uses crt;
var r, a : real;

BEGIN
	readln(r);
	a := 3.14159*r*r;
	writeln('A=',a:0:4);
END.

