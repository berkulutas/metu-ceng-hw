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
Tab A = Tab("t", "g","vv");
Tab B = Tab("g", "sss","fff");
Tab C = Tab("ppp", "x","ooo");
Tab D = Tab("j", "rr","nn");
Tab E = Tab("x", "x","ccc");
Tab F = Tab("ooo", "hh","oo");
Tab G = Tab("sss", "qqq","b");
Tab H = Tab("ff", "i","w");
Tab I = Tab("w", "jj","aaa");
Tab J = Tab("l", "www","yy");
Tab K = Tab("w", "q","yy");
Tab L = Tab("d", "i","ddd");
Tab M = Tab("kk", "m","ddd");
Tab N = Tab("yyy", "f","lll");
Tab O = Tab("k", "ll","ww");
Tab P = Tab("dd", "hh","p");
Tab Q = Tab("o", "vv","nnn");
Tab R = Tab("vv", "xx","mm");
Tab S = Tab("zzz", "v","g");
Tab T = Tab("jj", "lll","n");
Tab U = Tab("qq", "jj","yyy");
Tab V = Tab("hh", "kkk","ggg");
Tab W = Tab("cc", "p","jj");
Tab X = Tab("w", "ii","vv");
Tab Y = Tab("bbb", "lll","bbb");
Tab Z = Tab("ff", "ff","w");
a.newTab(A);
b.newTab(B);
c.newTab(C);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(D);
b.newTab(E);
c.changeActiveTabTo(5);
d.newTab(F);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(G);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(H);
b.changeActiveTabTo(0);
c.newTab(I);
d.changeActiveTabTo(0);
a.newTab(J);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(K);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(L);
d.moveActiveTabTo(2);
a.newTab(M);
b.newTab(N);
c.changeActiveTabTo(0);
d.newTab(O);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(P);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(Q);
b.changeActiveTabTo(0);
c.newTab(R);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.newTab(S);
c.moveActiveTabTo(4);
d.newTab(T);
a.newTab(U);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(V);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(W);
d.newTab(X);
a.newTab(Y);
b.changeActiveTabTo(4);
c.newTab(Z);
d.newTab(Z);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
d.changeActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(6);
brows->closeWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->print();
brows->closeWindow();
brows->getWindow(3);
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(0);
brows->getWindow(9);
brows->newWindow();
brows->closeWindow();
brows->print();
brows->getWindow(3);
brows->closeWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(6);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->print();
brows->getWindow(6);
brows->print();
brows->closeWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->getWindow(4);
brows->closeWindow();
brows->print();
brows->newWindow();
brows->getWindow(9);
brows->newWindow();
brows->getWindow(2);
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->getWindow(5);
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->closeWindow();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(1);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->print();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->newWindow();
delete brows;
}
	return 0;
};