std::vector<int> ratingThreshold(double threshold, std::vector<std::vector<int>> ratings) {

    float average = 0;
    vector<int> x;
    for(int i =0;i < ratings.size();i++){
        if(accumulate(ratings[i].begin(), ratings[i].end(), 0.0)/ratings[i].size() < threshold)
            x.push_back(i);
    }
    return x;
}
