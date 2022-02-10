void it_verticalDiagram(SDL_Renderer *render, vector<int>num){

    for (int i = 0; i < num.size(); i++){
        it_verticalLine(render, 10 + 100*i, 1000, numbers[i]);
    }

}

void it_horizontalDiagram(SDL_Renderer *render, vector<int>num){
    for (int i = 0; i < numbers.size(); i++){
        it_horizontalLine(render, 1000, 100 + 10*i, numbers[i]);
    }
}
