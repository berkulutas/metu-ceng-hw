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
Tab A = Tab("bbb", "k","aa");
Tab B = Tab("q", "n","www");
Tab C = Tab("k", "fff","iii");
Tab D = Tab("bbb", "jj","uu");
Tab E = Tab("w", "oo","l");
Tab F = Tab("t", "xxx","fff");
Tab G = Tab("hh", "l","tt");
Tab H = Tab("nn", "a","x");
Tab I = Tab("y", "sss","j");
Tab J = Tab("d", "r","kk");
Tab K = Tab("bb", "fff","bb");
Tab L = Tab("z", "s","o");
Tab M = Tab("ccc", "n","k");
Tab N = Tab("rrr", "k","b");
Tab O = Tab("rrr", "ww","r");
Tab P = Tab("p", "s","hhh");
Tab Q = Tab("o", "k","t");
Tab R = Tab("ii", "vvv","ggg");
Tab S = Tab("fff", "b","zz");
Tab T = Tab("hhh", "o","a");
Tab U = Tab("j", "rrr","y");
Tab V = Tab("yyy", "x","ppp");
Tab W = Tab("t", "f","u");
Tab X = Tab("yyy", "d","bb");
Tab Y = Tab("h", "xx","x");
Tab Z = Tab("uuu", "cc","dd");
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(A);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(B);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.newTab(C);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
b.newTab(D);
c.changeActiveTabTo(0);
d.newTab(E);
a.newTab(F);
b.newTab(G);
c.newTab(H);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(I);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(J);
a.changeActiveTabTo(2);
b.newTab(K);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(L);
b.moveActiveTabTo(5);
c.newTab(M);
d.newTab(N);
a.moveActiveTabTo(0);
b.newTab(O);
c.newTab(P);
d.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(Q);
a.changeActiveTabTo(1);
b.newTab(R);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(S);
b.newTab(T);
c.newTab(U);
d.newTab(V);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(W);
a.changeActiveTabTo(1);
b.newTab(X);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.newTab(Y);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(Z);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
d.changeActiveTabTo(5);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(2);
c.changeActiveTabTo(1);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.changeActiveTabTo(2);
d.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->switchToWindow(2);
brows->getWindow(2);
brows->getWindow(7);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeWindow();
brows->getWindow(0);
brows->getWindow(0);
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(0);
brows->switchToWindow(5);
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(4);
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->print();
brows->switchToWindow(7);
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(7);
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->getWindow(8);
brows->print();
brows->switchToWindow(4);
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(4);
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(1);
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(3);
brows->switchToWindow(6);
brows->switchToWindow(9);
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->getWindow(1);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->newWindow();
brows->getWindow(6);
brows->closeWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(8);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
delete brows;
}
	return 0;
};