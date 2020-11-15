import os
import os.path
import sys
import codecs
import chardet
def delfile():
    input("将要删除所有子文件夹中的exe文件,按任意键继续...")
    rootdir = os.getcwd()
    fileSubfix =[]
    fileSubfix.append("exe")
    for parent,dirnames,filenames in os.walk(rootdir):
        for filename in filenames:
            delfile = os.path.join(parent,filename)
            if os.path.splitext(filename)[1][1:] in fileSubfix:
                    print('删除:'+delfile)
                    os.remove(delfile)
    print("操作完毕...")
    input("按任意键继续...")
    os.system('cls')
def cpp2c():
    input("将要把所有cpp文件转为c文件,按任意键继续...")
    rootdir = os.getcwd()
    fileSubfix =[]
    fileSubfix.append("cpp")
    for parent,dirnames,filenames in os.walk(rootdir):
        for filename in filenames:
            changefile = os.path.join(parent,filename)
            if os.path.splitext(filename)[1][1:] in fileSubfix:
                newname = os.path.splitext(changefile)[0]+".c"
                print('改名:'+changefile+' ---> '+newname)
                os.rename(changefile,newname)
    print("操作完毕...")
    input("按任意键继续...")
    os.system('cls')

def convert(filename,out_enc="UTF-8"):
  try:
    content=codecs.open(filename,'rb').read()
    source_encoding=chardet.detect(content)['encoding']
    print ("fileencoding:%s" % source_encoding)

    if source_encoding != None :
      content=content.decode(source_encoding).encode(out_enc)
      codecs.open(filename,'wb').write(content)
    else :
      print("can not recgonize file encoding %s" % filename)
  except IOError as err:
    print("I/O error:{0}".format(err))

def explore(dir):
  for root,dirs,files in os.walk(dir):
    for file in files:
      if os.path.splitext(file)[1]=='.c' or os.path.splitext(file)[1]=='.py':
        print ("fileName:%s" % file)
        path=os.path.join(root,file)
        convert(path)

def change_encode():
  input("将要把所有.c文件编码转为UTF-8,按任意键继续...")
  explore(os.getcwd())
  print("操作完毕...")
  input("按任意键继续...")
  os.system('cls')
while(1):
    print("--------------------")
    print("1.递归删除.exe")
    print("2.递归改名.cpp->.c")
    print("3.递归修改.c,.py文件编码为UTF-8")
    print("exit.退出")
    print("--------------------")
    temp = input("输入操作:")
    if temp=='1':
        delfile()
    elif temp=='2':
        cpp2c()
    elif temp=='3':
        change_encode()
    elif temp=='exit':
        quit()
    else:
        print("bad input")
