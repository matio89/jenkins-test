pipeline {
    agent any

    stages {
          stage('Generate') {
            steps {
                echo 'Generating..'
                sh 'g++ generate.cpp -o generate'
                sh 'chmod u=x generate'
                sh './generate'
            }
        }
        
        stage('Search') {
            steps {
              echo 'Searching ..'
                sh 'g++ search.cpp -o search'
                sh 'chmod u=x search'
                sh './search'
            }
        }
          stage('Result') {
            steps {
              echo 'Results ..'
                sh 'if cmp -s RES.txt OUT.txt ; then echo SUCESS ; else exit 1 ; fi'
     
            }
        }
        
    }
}
