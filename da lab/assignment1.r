#To run in command line type Rscript filename.r
#https://rpubs.com/akhuperkar/118177

#series<-c(1,2,3,4,5,6,7,8,9,10)
#print(series)

#1
#(a)
#v <- 1:20
#print(v)

#(b)
#v <- 20:1
#print(v)

#(c)
#v1 <- 1:20
#v2 <- 19:1
#cat(v1,v2)

#(d)
#s<-c(4,6,3)
#tmp=s
#print(tmp)

#(e)
#s<-c(4,6,3)
#rep(s, 10)

#(f)         don't know 
#s<-c(4,6,3)
#rep(s,)

#(g)
#s<-c(4,6,3)
#rep(s, c(10,20,30))

#2
#x <- 3:10
#print(exp(x)*cos(x))

#3
#(a)
#x3a <- seq(3,36,by = 3)
#y3a <- seq(1,34,by = 3)
#v3a <- 0.1 ^ (x3a) * 0.2 ^ (y3a)
#print(v3a)

#3b
#x3b <- c(1:25)
#v3b <- 2 ^ (x3b) / (x3b)
#print(v3b)

#4
#(a) 
#i4a <- c(20:100)
#sum4a <- sum((i4a) ^ 3 + 2 * (i4a) ^ 2)
#print(sum4a)

#(b)
#i4b <- c(1:25)
#sum4b <- sum((2 ^ (i4b) / (i4b)) + (3 ^ (i4b) / (i4b) ^ 2))
#print(sum4b)

#5
#(a)
#v5a <- paste("label", 1:30, sep = " ")
#print(v5a)

#(b)
#v5b <- paste("fn",1:30,sep = "")
#print(v5b)

#6
#x.rndm <- sample(0:999,250, replace = F, prob = NULL)
#y.rndm <- sample(0:999,250, replace = F, prob = NULL)
#print(x.rndm)
#print(y.rndm)


#(a)
#v6a <- y.rndm[2:250] - x.rndm[1:249]
#print(v6a)

#(b)
#v6b <- sin(y.rndm[1:249]) / cos(x.rndm[2:250])
#print(v6b)

#(c)
#v6c <- exp(-x.rndm[1:250]) / x.rndm[1:250]
#print(v6c)

#(d)
#v6d <- x.rndm[1:248] + 2 * x.rndm[2:249] - x.rndm[3:250]
#print(v6d)

#pow<-function(x,y)
#{
#  result<-x^y
#  print(paste(x,"raised to the power",y,"is",result))
#}
#pow(2,3)

recursive.factorial<-function(x)
{
  if(x==0)
    return (1)
  else
    return (x* recursive.factorial(x-1))
}
recursive.factorial(5)