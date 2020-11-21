import os
import os.path
import sys
import codecs
import chardet
def delfile():
    input("��Ҫɾ���������ļ����е�exe�ļ�,�����������...")
    rootdir = os.getcwd()
    fileSubfix =[]
    fileSubfix.append("exe")
    for parent,dirnames,filenames in os.walk(rootdir):
        for filename in filenames:
            delfile = os.path.join(parent,filename)
            if os.path.splitext(filename)[1][1:] in fileSubfix:
                    print('ɾ��:'+delfile)
                    os.remove(delfile)
    print("�������...")
    input("�����������...")
    os.system('cls')
def cpp2c():
    input("��Ҫ������cpp�ļ�תΪc�ļ�,�����������...")
    rootdir = os.getcwd()
    fileSubfix =[]
    fileSubfix.append("cpp")
    for parent,dirnames,filenames in os.walk(rootdir):
        for filename in filenames:
            changefile = os.path.join(parent,filename)
            if os.path.splitext(filename)[1][1:] in fileSubfix:
                newname = os.path.splitext(changefile)[0]+".c"
                print('����:'+changefile+' ---> '+newname)
                os.rename(changefile,newname)
    print("�������...")
    input("�����������...")
    os.system('cls')

def convert1(filename,out_enc="gbk"):
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

def convert2(filename,out_enc="utf-8"):
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

def explore1(dir):
  for root,dirs,files in os.walk(dir):
    for file in files:
      if os.path.splitext(file)[1]=='.c' or os.path.splitext(file)[1]=='.py':
        print ("fileName:%s" % file)
        path=os.path.join(root,file)
        convert1(path)

def explore2(dir):
  for root,dirs,files in os.walk(dir):
    for file in files:
      if os.path.splitext(file)[1]=='.c' or os.path.splitext(file)[1]=='.py':
        print ("fileName:%s" % file)
        path=os.path.join(root,file)
        convert2(path)

def change_encode1():
  input("��Ҫ������.c�ļ�����תΪgbk,�����������...")
  explore1(os.getcwd())
  print("�������...")
  input("�����������...")
  os.system('cls')

def change_encode2():
  input("��Ҫ������.c�ļ�����תΪUTF-8,�����������...")
  explore2(os.getcwd())
  print("�������...")
  input("�����������...")
  os.system('cls')
  
while(1):
    print("--------------------")
    print("1.�ݹ�ɾ��.exe")
    print("2.�ݹ����.cpp->.c")
    print("3.�ݹ��޸�.c,.py�ļ�����Ϊgbk")
    print("4.�ݹ��޸�.c,.py�ļ�����Ϊutf-8")
    print("exit.�˳�")
    print("--------------------")
    temp = input("�������:")
    if temp=='1':
        delfile()
    elif temp=='2':
        cpp2c()
    elif temp=='3':
        change_encode1()
    elif temp=='4':
        change_encode2()
    elif temp=='exit':
        quit()
    else:
        print("bad input")
