#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("ii", "ddd","gg");
Tab B = Tab("ff", "l","x");
Tab C = Tab("t", "g","bbb");
Tab D = Tab("i", "ooo","n");
Tab E = Tab("bbb", "ddd","zz");
Tab F = Tab("s", "ll","aaa");
Tab G = Tab("sss", "x","ccc");
Tab H = Tab("www", "gg","kk");
Tab I = Tab("p", "iii","e");
Tab J = Tab("aa", "mm","ddd");
Tab K = Tab("uu", "jj","qq");
Tab L = Tab("bb", "jj","qqq");
Tab M = Tab("bb", "v","nn");
Tab N = Tab("rr", "nnn","p");
Tab O = Tab("o", "o","k");
Tab P = Tab("u", "xx","gg");
Tab Q = Tab("v", "rrr","v");
Tab R = Tab("ooo", "ggg","ppp");
Tab S = Tab("hh", "oo","ggg");
Tab T = Tab("xxx", "ll","oo");
Tab U = Tab("vv", "xx","yy");
Tab V = Tab("s", "b","nn");
Tab W = Tab("y", "t","vv");
Tab X = Tab("pp", "qqq","ddd");
Tab Y = Tab("m", "ttt","iii");
Tab Z = Tab("jjj", "x","nnn");
a.moveActiveTabTo(2);
b.newTab(A);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(B);
b.newTab(C);
c.newTab(D);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.newTab(E);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(F);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(G);
b.newTab(H);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(I);
b.newTab(J);
c.newTab(K);
d.changeActiveTabTo(0);
a.changeActiveTabTo(2);
b.newTab(L);
c.moveActiveTabTo(2);
d.newTab(M);
a.newTab(N);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(O);
d.moveActiveTabTo(4);
a.newTab(P);
b.newTab(Q);
c.moveActiveTabTo(1);
d.newTab(R);
a.changeActiveTabTo(1);
b.newTab(S);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(T);
d.newTab(U);
a.newTab(V);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(W);
a.changeActiveTabTo(5);
b.newTab(X);
c.newTab(Y);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.newTab(Z);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
d.moveActiveTabTo(4);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->newWindow();
brows->closeWindow();
brows->getWindow(4);
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(3);
brows->newWindow();
brows->switchToWindow(4);
brows->print();
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(7);
brows->getWindow(4);
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->getWindow(2);
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->print();
brows->getWindow(8);
brows->closeWindow();
brows->getWindow(2);
brows->mergeAllWindows();
brows->getWindow(7);
brows->getWindow(1);
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->newWindow();
brows->switchToWindow(8);
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(1);
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->getWindow(6);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->switchToWindow(1);
brows->print();
brows->getWindow(4);
brows->getWindow(3);
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->switchToWindow(5);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->getWindow(0);
brows->getWindow(3);
brows->print();
brows->print();
brows->switchToWindow(7);
brows->getWindow(4);
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(2);
brows->getWindow(1);
brows->getWindow(1);
brows->print();
brows->switchToWindow(0);
brows->closeWindow();
brows->getWindow(6);
brows->newWindow();
brows->closeWindow();
delete brows;
}
	return 0;
};