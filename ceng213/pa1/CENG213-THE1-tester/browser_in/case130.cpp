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
Tab A = Tab("aa", "eee","uu");
Tab B = Tab("s", "eee","kk");
Tab C = Tab("ddd", "ddd","aa");
Tab D = Tab("hhh", "ff","uuu");
Tab E = Tab("ccc", "d","tt");
Tab F = Tab("ee", "z","iii");
Tab G = Tab("aaa", "ee","iii");
Tab H = Tab("e", "bbb","f");
Tab I = Tab("hh", "yyy","b");
Tab J = Tab("uu", "aa","d");
Tab K = Tab("b", "a","a");
Tab L = Tab("f", "ii","hhh");
Tab M = Tab("xx", "p","oo");
Tab N = Tab("bbb", "w","ppp");
Tab O = Tab("kkk", "rr","pp");
Tab P = Tab("mm", "zz","k");
Tab Q = Tab("c", "zzz","cc");
Tab R = Tab("ss", "j","kk");
Tab S = Tab("qq", "f","d");
Tab T = Tab("aa", "r","ww");
Tab U = Tab("aa", "hhh","ee");
Tab V = Tab("e", "yyy","zzz");
Tab W = Tab("www", "nnn","t");
Tab X = Tab("xxx", "yyy","ttt");
Tab Y = Tab("qq", "zz","iii");
Tab Z = Tab("ee", "o","qq");
a.changeActiveTabTo(4);
b.newTab(A);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(B);
d.newTab(C);
a.newTab(D);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.newTab(E);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(F);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(G);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(H);
b.newTab(I);
c.changeActiveTabTo(2);
d.newTab(J);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(K);
d.moveActiveTabTo(0);
a.newTab(L);
b.newTab(M);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(N);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(O);
a.changeActiveTabTo(5);
b.newTab(P);
c.moveActiveTabTo(5);
d.newTab(Q);
a.newTab(R);
b.newTab(S);
c.newTab(T);
d.newTab(U);
a.newTab(V);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(W);
a.newTab(X);
b.changeActiveTabTo(5);
c.newTab(Y);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(Z);
d.moveActiveTabTo(2);
c.moveActiveTabTo(4);
a.moveActiveTabTo(3);
c.moveActiveTabTo(3);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
a.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
a.moveActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->print();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(6);
brows->newWindow();
brows->closeWindow();
brows->getWindow(2);
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->getWindow(7);
brows->print();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(4);
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->getWindow(8);
brows->mergeAllWindows();
brows->getWindow(6);
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(2);
brows->print();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(6);
brows->newWindow();
brows->closeWindow();
brows->getWindow(1);
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(9);
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->newWindow();
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->switchToWindow(6);
brows->closeWindow();
brows->print();
brows->switchToWindow(2);
brows->print();
brows->getWindow(5);
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->getWindow(0);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(0);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(5);
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
delete brows;
}
	return 0;
};