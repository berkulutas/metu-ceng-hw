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
Tab A = Tab("pp", "f","f");
Tab B = Tab("d", "y","r");
Tab C = Tab("oo", "p","eee");
Tab D = Tab("mm", "n","b");
Tab E = Tab("z", "a","dd");
Tab F = Tab("m", "ooo","kkk");
Tab G = Tab("uuu", "ii","jj");
Tab H = Tab("iii", "a","cc");
Tab I = Tab("nn", "a","mm");
Tab J = Tab("a", "yy","xxx");
Tab K = Tab("g", "i","kkk");
Tab L = Tab("i", "ee","q");
Tab M = Tab("vvv", "w","f");
Tab N = Tab("v", "h","ss");
Tab O = Tab("c", "oo","nnn");
Tab P = Tab("kkk", "z","l");
Tab Q = Tab("e", "yyy","zz");
Tab R = Tab("ttt", "vvv","jj");
Tab S = Tab("m", "ll","ff");
Tab T = Tab("rrr", "ooo","o");
Tab U = Tab("z", "ppp","c");
Tab V = Tab("h", "uuu","k");
Tab W = Tab("xxx", "h","nn");
Tab X = Tab("gg", "i","lll");
Tab Y = Tab("oo", "xxx","ss");
Tab Z = Tab("lll", "mm","rrr");
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(A);
d.newTab(B);
a.changeActiveTabTo(1);
b.newTab(C);
c.changeActiveTabTo(1);
d.newTab(D);
a.changeActiveTabTo(4);
b.newTab(E);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(F);
d.newTab(G);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(H);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(I);
a.newTab(J);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(K);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(L);
a.changeActiveTabTo(3);
b.newTab(M);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.newTab(N);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.newTab(O);
c.newTab(P);
d.newTab(Q);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.newTab(R);
c.newTab(S);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(T);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.newTab(U);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(V);
a.changeActiveTabTo(1);
b.newTab(W);
c.moveActiveTabTo(1);
d.newTab(X);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(Y);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(Z);
c.newTab(Z);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
d.moveActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->print();
brows->getWindow(5);
brows->print();
brows->switchToWindow(1);
brows->getWindow(6);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(0);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(9);
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->getWindow(4);
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->getWindow(4);
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeWindow();
brows->print();
brows->print();
brows->newWindow();
brows->switchToWindow(7);
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(2);
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->getWindow(6);
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->switchToWindow(9);
brows->getWindow(0);
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->print();
brows->newWindow();
brows->print();
brows->print();
brows->switchToWindow(6);
brows->getWindow(9);
brows->switchToWindow(2);
brows->switchToWindow(8);
brows->getWindow(3);
brows->switchToWindow(0);
brows->print();
brows->print();
brows->print();
delete brows;
}
	return 0;
};