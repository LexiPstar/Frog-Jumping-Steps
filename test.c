#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int frog_jumping_steps(int n)
{
	if (n <= 2)
		return n;
	else
		return frog_jumping_steps(n - 1) + frog_jumping_steps(n - 2);
}

int main()
{
	int n = 0;
	//����̨����
	scanf("%d", &n);// 1<=n<=10
	//�����м�������
	int m = frog_jumping_steps(n);
	//���
	printf("����%d��̨�ף���%d������", n, m);
	return 0;
}




int frog_jumping_steps(int n)
{
    // ��̬�����ڴ�
    int* dp = (int*)malloc((n + 1) * sizeof(int));

    // ����ڴ����ʧ�ܣ����ش���
    if (dp == NULL) {
        printf("Memory allocation failed!\n");
        return -1;  // �����־
    }

    // ��ʼ���������
    dp[1] = 1;  // ��1�׵ķ�ʽֻ��һ��
    if (n > 1) dp[2] = 2;  // ��2�׵ķ�ʽ������

    // �����3��n��������
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];  // ��ǰ̨�׵����� = ��һ̨�� + ����̨��
    }

    // ��ȡ���
    int result = dp[n];

    // �ͷŶ�̬������ڴ�
    free(dp);

    return result;
}

int main()
{
    int n = 0;
    // ����̨����
    scanf("%d", &n);  // 1 <= n <= 10
    // ���㼸������
    int m = frog_jumping_steps( n);
    // ������
    printf("%d\n", m);
    return 0;
}



int frog_jumping_steps(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;

    int dp[n + 1];//c99��׼ʹ�ñ�������
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{
    int n = 0;
    // ����̨����
    scanf("%d", &n); // 1 <= n <= 10
    // ���㼸������
    int m = frog_jumping_steps(n);
    // ������
    printf("%d\n", m);
    return 0;
}
