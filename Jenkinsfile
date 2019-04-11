pipeline {
    agent {
        docker { image 'gcc:8.3' }
    }
    stages {
        
        stage('build') {
            steps {
                sh 'gcc -o app main.c'
            }
        }
        stage('test') {
            steps {
                sh 'gcc test.c -lrt -lm -o test'
                sh './test'
            }
        }
    }
}
