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
Tab A = Tab("rrr", "nn","x");
Tab B = Tab("rr", "x","ww");
Tab C = Tab("bb", "c","v");
Tab D = Tab("yy", "xx","nn");
Tab E = Tab("w", "c","www");
Tab F = Tab("t", "p","k");
Tab G = Tab("oo", "xxx","cc");
Tab H = Tab("ggg", "d","fff");
Tab I = Tab("ll", "oo","h");
Tab J = Tab("yyy", "kkk","f");
Tab K = Tab("y", "u","www");
Tab L = Tab("p", "ppp","mm");
Tab M = Tab("ttt", "rr","ttt");
Tab N = Tab("oo", "www","tt");
Tab O = Tab("x", "sss","www");
Tab P = Tab("uuu", "d","nn");
Tab Q = Tab("bbb", "i","uuu");
Tab R = Tab("eee", "n","n");
Tab S = Tab("zzz", "ll","x");
Tab T = Tab("yyy", "kk","aaa");
Tab U = Tab("hh", "ss","vvv");
Tab V = Tab("ccc", "eee","ii");
Tab W = Tab("f", "bbb","v");
Tab X = Tab("xx", "bb","ll");
Tab Y = Tab("ss", "nn","xx");
Tab Z = Tab("jj", "v","www");
a.changeActiveTabTo(0);
b.newTab(A);
c.changeActiveTabTo(0);
d.newTab(B);
a.moveActiveTabTo(4);
b.newTab(C);
c.moveActiveTabTo(4);
d.newTab(D);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(E);
a.newTab(F);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(G);
b.changeActiveTabTo(4);
c.newTab(H);
d.newTab(I);
a.moveActiveTabTo(0);
b.newTab(J);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(K);
d.changeActiveTabTo(2);
a.newTab(L);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(M);
a.moveActiveTabTo(1);
b.newTab(N);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.newTab(O);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(P);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(Q);
a.changeActiveTabTo(1);
b.newTab(R);
c.moveActiveTabTo(1);
d.newTab(S);
a.newTab(T);
b.newTab(U);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(V);
a.moveActiveTabTo(2);
b.newTab(W);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(X);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(Y);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(0);
b.newTab(Z);
c.newTab(Z);
d.newTab(Z);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
c.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(3);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeWindow();
brows->getWindow(2);
brows->switchToWindow(6);
brows->print();
brows->closeWindow();
brows->print();
brows->print();
brows->switchToWindow(9);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->print();
brows->switchToWindow(2);
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->getWindow(7);
brows->getWindow(4);
brows->getWindow(5);
brows->switchToWindow(0);
brows->print();
brows->getWindow(1);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->print();
brows->print();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->newWindow();
brows->switchToWindow(1);
brows->newWindow();
brows->closeWindow();
brows->getWindow(0);
brows->newWindow();
brows->closeWindow();
brows->getWindow(5);
brows->print();
brows->print();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->switchToWindow(9);
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->newWindow();
brows->closeWindow();
brows->getWindow(8);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(3);
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(8);
brows->getWindow(3);
brows->newWindow();
brows->switchToWindow(6);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->getWindow(0);
brows->mergeAllWindows();
brows->getWindow(5);
brows->newWindow();
brows->closeWindow();
brows->getWindow(9);
brows->getWindow(2);
brows->switchToWindow(1);
brows->closeEmptyWindows();
delete brows;
}
	return 0;
};