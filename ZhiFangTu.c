function [ output_args ] = Untitled5( input_args )
%UNTITLED5 �˴���ʾ�йش˺�����ժҪ
%   �˴���ʾ��ϸ˵��
clear all;close all;
I=imread('WIN_20200319_14_06_58_Pro.jpg');
I=rgb2gray(I); 
I=im2double(I);
figure;
subplot(121);
imshow(I);
subplot(122);
imhist(I,200);



end

