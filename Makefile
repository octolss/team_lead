make:
	g++ main.cpp
	./a.out

push:
	git add .
	git commit -a -m "."
	git push

