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
Tab A = Tab("m", "tt","bbb");
Tab B = Tab("dd", "h","vv");
Tab C = Tab("ff", "ggg","zz");
Tab D = Tab("ccc", "x","eee");
Tab E = Tab("f", "gg","ccc");
Tab F = Tab("mmm", "jjj","s");
Tab G = Tab("x", "gg","ppp");
Tab H = Tab("ee", "a","www");
Tab I = Tab("jjj", "lll","h");
Tab J = Tab("hh", "rrr","rrr");
Tab K = Tab("iii", "ppp","nnn");
Tab L = Tab("vvv", "z","fff");
Tab M = Tab("rr", "w","i");
Tab N = Tab("s", "l","u");
Tab O = Tab("t", "kkk","ggg");
Tab P = Tab("j", "v","ooo");
Tab Q = Tab("kk", "e","j");
Tab R = Tab("jjj", "xxx","r");
Tab S = Tab("zzz", "uuu","bb");
Tab T = Tab("l", "xxx","ii");
Tab U = Tab("kk", "rrr","t");
Tab V = Tab("x", "yyy","f");
Tab W = Tab("j", "xx","w");
Tab X = Tab("dd", "q","q");
Tab Y = Tab("fff", "i","kkk");
Tab Z = Tab("yyy", "bbb","p");
a.newTab(A);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(B);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(C);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(D);
b.newTab(E);
c.moveActiveTabTo(4);
d.newTab(F);
a.changeActiveTabTo(1);
b.newTab(G);
c.moveActiveTabTo(1);
d.newTab(H);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(I);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(J);
a.newTab(K);
b.newTab(L);
c.newTab(M);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.newTab(N);
c.newTab(O);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.newTab(P);
c.changeActiveTabTo(5);
d.newTab(Q);
a.newTab(R);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(S);
b.newTab(T);
c.changeActiveTabTo(4);
d.newTab(U);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(V);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.newTab(W);
c.newTab(X);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(Y);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.newTab(Z);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
b.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(4);
d.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->getWindow(5);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->getWindow(3);
brows->getWindow(6);
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(3);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(4);
brows->closeWindow();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->getWindow(6);
brows->switchToWindow(4);
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(7);
brows->getWindow(7);
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->getWindow(7);
brows->mergeAllWindows();
brows->getWindow(2);
brows->getWindow(0);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(9);
brows->switchToWindow(3);
brows->switchToWindow(3);
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->getWindow(4);
brows->switchToWindow(8);
brows->getWindow(2);
brows->switchToWindow(8);
brows->print();
brows->newWindow();
brows->newWindow();
brows->print();
brows->print();
brows->getWindow(9);
brows->print();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->getWindow(6);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(0);
brows->closeWindow();
brows->switchToWindow(7);
brows->getWindow(0);
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->print();
brows->switchToWindow(4);
brows->switchToWindow(2);
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
delete brows;
}
	return 0;
};