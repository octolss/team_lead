make:
	g++ main.cpp
	./a.out

make push:
	git add .
	git commit -a -m "."
	git push

